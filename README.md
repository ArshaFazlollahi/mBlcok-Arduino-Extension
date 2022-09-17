# mBlcok-Arduino-Extension
⭐An mBlock extension for Arduino Uno

I made this mBlock extension for Exceed Robotics during my Co-Op semester. We designed a robot prototype and I coded this extension so that it would be used in their classes with the robot to teach programming to the students there.

# Usage

- Download and setup mBlock from https://mblock.makeblock.com/en-us/
- Add the Arduino Uno as a device.
- Drag the extension's .mext file onto mBlock.
- Always put the "Declare wheel and forklift motors" block under the "When Arduino Uno starts up" block to be able to use the rest of the blocks.

You can combine different blocks to make your Arduino robot around move however you want it to. The robot used in my prototype contained a forklift so if your robot also contains one you can setup and use the forklift block, otherwise just make sure the pins that your wheels are connected to match the ones used in the code.

![image](https://user-images.githubusercontent.com/112593394/190879475-f498c7ed-14a9-4daa-aef9-83ad4c16d595.png)

# Specifics

In order to convert my code into a file that's recognized by mBlock, I used mBlock's extension builder.

🔗Here's a link to the website: https://ext.mblock.cc/#/login?r=/
