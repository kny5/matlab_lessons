# A brief introduction to Matlab and the Octave GNU alternative.

#### About Licenses, software cracking and compatibility:
Usually when you're heading to learn __Matlab__ the instructor will suggest the installation of a mathworks.com version and then use the __Trial period__ or the implementation of a __License cracker__, unless your college is one of the few that can affort the License fee, so you apparently have nothing else to do, but install this version.

The Mathworks version of Matlab is not natively compatible with MacOs systems. Their privative License doesn't allow programmers to compile the source code in to the MacOs platform. But there's some "Tricks" to make it work in there, the first one is have a Windows Version running with the dual boot program "Bootcamp" or use "Parallels" to path the dependencies and make it run with some performance cost in your MacOs system. We have a very good alternative called Octave.

#### About the Octave GNU, Matlab compatible software.
Matlab is a very important software for the scientific community for that reason is widely used and before Matlab the jumpstart to computational linear algebra and numeric approximations was very hard, because you had to use __fortran__ or pure __C__.

So the GNU initiative just began a project to make a __Matlab__ compatible software to allow users with no budget or license issues to have a full compatible "interpreter".

Of course __Matlab__ have tons of tools oriented to __control theory simulations__, that you probably will not found in Octave, but if you are able to write a program for your __Mathworks Matlab__ it will run in Octave.

### Installing octave in the MacOs system
Download it from octave.org, and choose the MacOs installer.

Install it and that's all.

### Octave/Matlab system explained

Just to ensure the understanding that both are the same for our purpose we will call them Octave/Matlab.

_Octave/Matlab is a Program that runs programs in realtime that are written in the "Matlab Language"._
 
Programmers call this type of programs __"Interpreters"__, and the __"Matlab Language"__ as "High level programming languages", but why?

High level only means that you don't need to interact with the system memory or hardware architecture. For example in Cpp you have a "limit" in the length of some variables, you have to define if you will use an _int_, _float_, _double_ or _char_. On high level languages usually you don't have to do this, the interpreter will understand which one of your variables are a certain type of variable.

The Octave/Matlab interpreter will execute your programs written in a ".m" file and give you a real-time response. In C++, C and other low-level languages you have to compile them to have a _binary executable_.

For this reason, every program written in the "Matlab Language" will run on every computer with the interpreter installed. This programs will run too in the mathworks version and the Octave one.