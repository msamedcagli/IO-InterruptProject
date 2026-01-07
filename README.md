# I/O Interrupt

🔗 **Language Selection / Dil Seçimi**  
[English](#english) | [Türkçe](#turkce)

<a id="english"></a>

## 📘 Computer Organization and Architecture – Interrupt Example

This project focuses on **I/O interrupts**, which are a fundamental part of the **Interrupt mechanism** in computer organization and architecture. The goal is to demonstrate how a processor reacts to hardware-originated events and why these events are critical within system architecture, using a concrete example.

The topic is explained not only at a theoretical level, but also through a physical circuit and a working system. In this way, the logic behind I/O interrupts is made directly observable.

### 🎯 Project Scope

Within the scope of this project:

- The definition of I/O interrupts is explained  
- The conditions under which they occur are discussed  
- The interaction between hardware and the processor is examined  
- The concept is reinforced with a sensor-based physical example  

The system is designed using an **event-driven architecture**. The processor does not constantly wait; instead, the hardware generates an interrupt when it is ready, and the processor intervenes only when necessary.

### ⚙️ System Design

In this project, distance data is obtained using an ultrasonic sensor. The echo signal received from the sensor is captured using an **I/O interrupt**. When the measured distance falls below a predefined threshold value, the system generates a warning.

Compared to the polling approach, this method is more efficient and better suited for real-time systems.

### 🧩 Hardware and Interface

| Circuit Diagram |
|:---------------:|
| ![Circuit Diagram](/arduino.png) |

### 🎥 Video Explanation

👉 [YouTube](https://www.youtube.com/watch?v=FwAxGLBNP24)

### 🧾 Conclusion

This project demonstrates why I/O interrupts are one of the fundamental building blocks of modern systems. Processor time is used efficiently, the system remains responsive, and the harmony between hardware and software can be clearly observed.

---

---
<a id="turkce"></a>

## 📘 Bilgisayar Organizasyonu ve Mimarisi – Interrupt Konusu Örneği

Bu projede **Interrupt (Kesme) mekanizması** içerisinde yer alan **I/O kesmeleri** ele alınmıştır. Amaç, işlemcinin donanım kaynaklı olaylara nasıl tepki verdiğini ve bu olayların sistem mimarisinde neden kritik olduğunu somut bir örnek üzerinden göstermektir.

Konu, yalnızca teorik olarak değil; fiziksel bir devre ve çalışan bir sistem üzerinden açıklanmıştır. Böylece I/O kesmelerinin mantığı gözle görülür hâle getirilmiştir.

### 🎯 Proje Kapsamı

Bu çalışma kapsamında:

- I/O kesmelerinin tanımı yapılmıştır  
- Hangi durumlarda oluştuğu açıklanmıştır  
- Donanım–işlemci etkileşimi incelenmiştir  
- Sensör tabanlı bir fiziksel örnek ile konu pekiştirilmiştir  

Sistem, olay tabanlı (event-driven) bir mimariyle tasarlanmıştır. İşlemci sürekli beklemez; donanım hazır olduğunda kesme üretir ve işlemci yalnızca bu durumda müdahale eder.

### ⚙️ Kullanılan Yapı

Projede ultrasonik bir sensör kullanılarak mesafe bilgisi elde edilmiştir. Sensörden gelen echo sinyali, **I/O kesmesi** yardımıyla yakalanmıştır. Ölçülen mesafe belirlenen eşik değerin altına düştüğünde sistem bir uyarı üretir.

Bu yaklaşım, polling yöntemine kıyasla daha verimli ve gerçek zamanlı sistemlere daha uygundur.

### 🧩 Donanım ve Arayüz

| Devre Şeması |
|:-----------:|
| ![Devre Şeması](/arduino.png) |

### 🎥 Video Anlatım

👉 [YouTube](https://www.youtube.com/watch?v=FwAxGLBNP24)

### 🧾 Sonuç

Bu proje, I/O kesmelerinin neden modern sistemlerin temel taşlarından biri olduğunu göstermektedir. İşlemci zamanı verimli kullanılır, sistem tepkiseldir ve donanım–yazılım uyumu net biçimde gözlemlenebilir.

Basit görünen bu yapı, işletim sistemlerinden gömülü sistemlere kadar uzanan sağlam bir mimari anlayışın küçük ama net bir temsilidir.
