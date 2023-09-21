# ATmega32U4--1.4--Timer2.0
用Timer来控制LED的闪烁频率，涉及到OCR3A寄存器
####  电路图  
![890088680699154420](https://github.com/wenxiwei00/ATmega32U4--1.4--Timer2.0/assets/114196821/c55dc1fb-3807-4d89-a13c-52da992b2a6a)  

注意这里一定要用PC6口才可以，因为我的代码里面用到了OCR3A寄存器，只有PC6与OCR3A关联  
<img width="474" alt="40b7affe50dca9e6497f2fd98db97e3" src="https://github.com/wenxiwei00/ATmega32U4--1.4--Timer2/assets/114196821/13a6e06d-37fe-4839-b3e1-d59b9d8f8c29">
####  最终效果  
调整main.c里面的COMPARVALUE可以调整LED闪烁的频率。  
调整TCCR3B可以调整pre-scaler是多少，也可以调整LED闪烁的频率。
和Timer1.0唯一的不同是，把COMPAREVALUE存到了OCR3A里面，设置了PC6的模式是toggle
####  参考资料  
可以找到如何设置Timer mode，如何设置pre-scaler...  
https://medesign.seas.upenn.edu/index.php/Guides/MaEvArM-timer3
