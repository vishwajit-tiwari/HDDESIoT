# Hrdware Design and Development for Embedded System and IoT

> **Electronic Technology are on rise :**
* IoT, Drones, Boats
* 5G, LPWAN
* Sensors, Actuators

> **Goverment Thrust :**
* **Aatmnirbhar Bharat :** *Build Self Reliance in Technology for efficiency in existing systems.*
* **Smart Cities Mission**
* **Make in India**

---

## What is an Embedded System ?

* **Embedded :** *Fixed firmly or implanted.*
* **System :** *A set of things working togather.*

> **Definition :** *A small Computer that is slotted to under take a dedicated task.*
* **Small :** *Low Computation, Smaller Memory, Small size, Low Power Consumption etc.*
* **Computer :** *Revolves arround a Processor/Controller arichitecture.*
* **Dedicated Task :** *Embedded Systems are known to perform dedicated task or fullfill the specific requirement.*
* Examples : 
    * Washing Machine, Refrigerators
    * Mobile Phones, Routers
    * Smart Meters, Smart Gadgets
    * Smart Living Spaces 
___

## 6-Box Model of Embedded System :
![image](https://www.linkpicture.com/q/6_Box.png)

**1. Input Devices :** *Sensors, Human Interface Devices.*

**2. Controllers :** *Brain of your Embedded System i.e. Microcontroller has logic or program that do job which we require it to do.*

**3. Output Devices :** *Motor, Display, Some Actuators or Relays used to control or turn ON or turn OFF the other equipments.*

**4. Communication & Network :** *This has networking protocal and standard that allow you to communicate with one point to other point.*

**5. Host :** *Host may be your PC which is connected to that spacific device and it allow you to debug and also allow you to send some data to the device and get some data from the device.*

**6. Power Supply :** *All of these will not work unless we have power supply.*

*Power supply requirement varies according to followings :*
* Indoor Application
* Out door Application

**7. Electronic Glue :** *This is a series of components that you putup arround all these blocks & build them in such a way that there is a form of Communication between each of them so that system works togather as an entire Embedded System.*

> **Embedded Devies :** *Some of Popularly avilable devies*

![image](https://www.linkpicture.com/q/fitband2.png)

![image](https://www.linkpicture.com/q/quadcoptor.png)

![image](https://www.linkpicture.com/q/vaccumecleaner.png)

---


## Course Objectives :
> **By the end of this course, you will**
    
* *Understand and familiarize youself with the **Design Concept of Elctronic Hardware :***
    * *Elctronic Devices and their Practical Use*
    * *Survey of devices and their selection, Applications*
    * *How to put electronic devices togather to build Microcontroller baesd Embedded System.*

* ***Design** the **Hardware** for a **Microcontroller** baesd **Embedded System :***
    * *Integration of Input devices like Sensors and User Devices*
    * *Output Devices like Motor, Relays, and Displays*
    * *Power Supply Design and  Batteries*
    * *Microcontroller Borads with various comm peripherals*

* **Use a Design Software :**
    * *Develop your own project with Schematics*
    * *Develop the board layout, route and genrate the manufacturing slides*

* Have walk through of **PCB manufacturing process :**
    * *Manufacturing Processes*
    * *Assembly Techniques*
___
---

### Different Part of Embedded System :

![image](https://www.linkpicture.com/q/herarchyEmbeddedSystem.png)

### End Product or Final Product :

![image](https://www.linkpicture.com/q/EndProduct.png)

## Software Development Life Cycle (SDLC)

___

### Software Development :

> **Software life cycle processes that comprise the activities of**
* *Requirements analysis*
* *Design*
* *Coding*
* *Testing*
* *Installation & Acceptance*
* *User Support*

![image](https://static.javatpoint.com/tutorial/software-engineering/images/software-engineering-software-development-life-cycle.png)

#### **1. Requirment Analysis:** 
*Understanding the total project from end to end is called analysis.*

* Understand the requiremnt
* Analyse them
* Be prepared to know what is aspected to be delivered.

#### **2. Design/GUI:**
* Design talks about architecture.
* Design talks about deviding the toatal set of requirment into subsystems/modules.
* It talks about how screen appeares.
* It talks about what kind of fields are required on screen.

#### **3. Coding:**
*In this phase, developers start build the entire system by writing code using the chosen programming language.*

*In the coding phase, tasks are divided into units or modules and assigned to the various developers.*

#### **4. Testing:**
*Tesing phase is where you focus on investigation and discovery.*

*During the testing phase, developers find out whether their code and programming work according to customer requirements.*

#### **5. Installation and Acceptance:**
*Acceptance testing, a testing technique performed to determine whether or not the software system has met the requirement specifications.*

*The main purpose of this test is to evaluate the system's compliance with the business requirements and verify if it is has met the required criteria for delivery to end users.*

> There are various forms of acceptance testing:

* User acceptance Testing
* Business acceptance Testing
* Alpha Testing
* Beta Testing*

![image](https://www.tutorialspoint.com/software_testing_dictionary/images/acceptance_testing.jpg)

#### **Acceptance Criteria:**

*Acceptance criteria are defined on the basis of the following attributes*

* Functional Correctness and Completeness
* Data Integrity
* Data Conversion
* Usability
* Performance
* Timeliness
* Confidentiality and Availability
* Installability and Upgradability
* Scalability
* Documentation

#### **6. User Support:**
*The Support stage of the SDLC deals with the on-going support and maintenance of the business solution.*

___

### SDLC Models : 
* Waterfall Model
* Spiral Model
* Prototype Model
* Iterative Model
* Rapid Application Development Model

**1. Waterfall Model :**
* *Also known as **classic life cycle model,** **linear sequential model***
* *This model suggest a systematic and sequential approach to software development that begins at requirements analysis and progress through all life cycle phase sequentially.* 

![image](https://www.linkpicture.com/q/Selection_006.png)

***Some important Points:***
- *Development activities carried out sequentially*
- *Review and approval of each phase outputs*
- *Model does not permit going back and forth*
- *If any defect found, go back to the originating phase and start traversing sequentially all over again*

![image](https://www.linkpicture.com/q/Selection_007.png)

***Suitable for projects where-***
* *Requirements are clearly defined*
* *Small and medium term duration*
* *Stable technology*
* *Familiarity with the domain and development environments*

![image](https://www.linkpicture.com/q/Selection_008.png)

***Advantages:***
* *Project under control*
* *Pre-defined outputs at every phase*
* *Tracking changes is easy*  
* *Early identification of slippages, if any*

***Disadvantes:***
* *In real life, customer requirements do change*
* *Customer appraisal of completed work - not feasible always*
* *Phases can not run concurrently*

