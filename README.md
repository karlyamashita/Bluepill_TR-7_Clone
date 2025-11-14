## What this project is
This project is a clone of the original TR-7 that I created in year 2000-2001.

### A little bit about me
I went to college and finished my Electronics classes and microprocessor programming, which was around 1990-1992. At that time I was facinated with car audio and loved how music could boom from a car, lol.  
So instead of looking for an Engineering job, I went looking for a job to be a car audio installer. My first job was at the Good Guys in La Puente, CA. I was there for a couple of years before I went on to work at Pacific Audio and Alarm in Placentia, CA.
I created an interface at that time to control a Sony radio using the cruise control from a Honda Civic. At that time, steering wheel audio controls were not common unless it was a higher end vehicle. I used Microchip PIC16F84 flash device.

So, one day an Engineer from Pacific Accessory Corporation stopped by and wanted to test an interface that he was working on. That interface was a steering wheel control used to control an aftermarket stereo from the higher end vehicles that had steering wheel audio controls.
He was using a Microchip microcontroller of the UV erasable type. The interface would learn IR commands from the wireless remote and had an IR LED that would point towards the radio. We talked for about an hour and then went on our way.

I then went to work at Transonic in Walnut, CA. This was about the time my son was around 3 years old. I would work late, sometimes after 7pm to 10pm, or even later. I didn't get enough time to spend with my son. 
So I decided to find me a normal 9-5 job. At that time I was learning how to create websites.

### Pacific Accessory Corporation
While I was searching for a job, I decide to check out PAC's website. I noticed that their website was not updated for many years based off the `last update` date. I decided to call the Engineer at PAC and asked if they would like to have their website updated. 
We've talked for 30-40 minutes and just out of the blue, he asked if I'd like to work for PAC as a tech support. He said I would also help with updating their website and writing documents. I needed a change so I said yes!

Keep in mind that PAC was only a passive component manufacturer and did not sell any electronics besides the Steering Wheel Control interface. They only sold capacitors, inductors, speaker high-low converters.

### SWI-X Steerin Wheel Control interface
At the time, PAC had 4 or 5 steering wheel control interface for different vehicles. If i remember, it was the SWI-2, SWI-3, SWI-4, SWI-6?, SWI-7. Some vehicles use analog while other used digital communcation to the radios which is why there we differrent interfaces. 
So me being a thinker, I decided to combine all those interfaces into one interface. So the SWI-X was born.

I've also created the SWI-RC which controlled Sony and Pioneer radios directly using the analog input on the back of the radios.

### TR-4
One project that the Engineer was working on was a module that would take a low voltage and delay for a moment before turning on an output. The idea was that when the factory radio was turned on, the DC voltage on speaker wires would be around 6V.
There was a need to delay the remote turn going to an afternmarket amplifier else the DC bias from the speaker output going through a hig-low converter would cause the audio to thump throug the aftermaket amplifier. 
He was using some capacitor/resistor combination along with a mosfet or transistor. However, he could not aget it to work as expected. 
I told him why don't we just use a PIC12F508 which was a small 8-pin micronctroller. With an 78L05 voltage regulator and few components, I wrote Firmware to delay an output when it sense a voltage between 0.8V-12.8V. So the TR-4 was born.

### TR-7 is born
So at that time, there was an Engineer which I believe was David Navone whom had many modules that did miscellaneous taks. I decided to take these type of modules and create 1 module that could do it all, plus more.  

So the TR-7 was born.

The TR-7 is based off the Microchip PIC12Fxx 8 pin microcontroller. I designed it so that it could be programmed to do any of the tasks with different timing. I had 16 features implemented before my boss said we have to cut it off at some point, lol.
So I designed the instructions. But while doing so, I created 7 more features in the firmware. But we decided to make it a secret feature that was available but not part of the main instructions. 
We've mentioned we didn't provide tech support for these features, but the features were there.

### Years later
I'v made many other products including CAN bus interfaces and video integration. I've made PAC what it is today or at least up until 2013. PAC was bought from some investors in 2007 and the main company, Stinger Electronics based in Florida decide to make internal changes. I've mentioned that i probably can't make the move from Santa Ana, CA to Ontario, CA. 
So weeks later, they laid me off. At that time they had engineers in Florida that continued what I've created. They even tried to create a TR-7 Pro which was not a bad idea. But as of today, the TR-7 Pro in discontinued, lol.
However, the TR-4 and TR-7 still seems to be sold today. :) 

