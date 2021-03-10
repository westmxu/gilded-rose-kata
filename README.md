# gilded-rose-kata

To begin, I first chose a pair of languages to refactor in.
I chose PHP and R, since I had NetBeans (which allegedly supports PHP out of the box) and RStudio already installed.
I have never used PHP, but I had used R briefly in my probability theory course in Fall 2018, but we mostly used it as a calculator and to analyze data.
I got the R code working in no time, had no issues with it at all. 
However, getting the PHP stuff working was a nightmare, and I eventually gave up on it.
Then I decided to choose a different language,  C++.
I installed Eclipse's C/C++ package and tried to open the project to no avail.
I also gave up on C++.
So, I think I'll just do it in R twice, even though I have a strong suspicion I'll never use it again after this project.
I'm going to email Yemi and see if he can help me out.

After emailing Yemi, he convinced me to keep going with the JetBrains IDEs instead.
I picked CLion and RubyMine because I wanted to try C++ and Ruby is another OO language, so it can't be too outside of my comfort zone.
There was certainly some headache involved with setting up the IDEs, but I got them working after an hour or four.
So, the next thing I did was refactor the Kata in Java to get a feel for what was going to happen in the other languages.
This went rather well, and I'm quite happy, but not perfectly happy, with how it turned out.
I found that the "no editing Item class" rule was a bit odd, so I worked around it with a GenericItem class.

After this, I attempted to translate the code into C++.
I have never used C++, but I've heard that it's quite similar to Java.
It is not.
After getting the basics down, dealing with the oddities of inclusions and pointers (among others) is just too much for a cold start like this.
After a couple of hours, I managed to get it in a running-but-not-working state, and I think I'm going to leave it at that.
The reason why the code is not working is that every Item, regardless of actual type, is treated as a GenericItem, even though I've tried my damnedest to get the polymorphic function updateQuality() to work properly.
You can see what I'm going for in the code, but I guess it just doesn't work that way.
I could write much more about my so-far negative experience with C++, but I don't want to make this README as long as the last one.
The next step is to watch the provided video and then refactor in Ruby, which will hopefully be easier.
Hopefully.

After watching the video, I have to say that I'm quite surprised that what I produced naturally was so close to what the expert did.
Of course, I did not go about it in the way he did.
I figured out how everything was meant to work ahead of time (based on the design/assignment document, not the code) then directly implimented that stuff.
As such, I think I'm just going to directly translate my Java code to Ruby for the next step, since it is damn near the same thing he made.
I will make one change, though: I'll make GenericItem have an Item as a field rather than a superclass.

Alright, a few hours later I have finished (or more accurately given up on) the Ruby implementation.
Ruby is interesting, and less frustrating than C++, but the main thin gthat is making me stop is the stack trace for errors, which is unreadable garbage to me.
I'm sure there is a better way to view errors in Ruby, but I don't want to spend another hour or two on this project figuring that out.
I got it into a similar state to the C++ code, it runs but doesn't work.
Yeah, over all, I liked the idea of this kata, but doing it in a two new languages was very stressful for me.
I like the idea of learning new languages, but I feel like I was thrown in to the thick of things without knowing which way was up.
Personally, a gentler introduction to a new language would be better.
Perhaps we could do a project where we only use one new language (perhaps with provided resources) to make a larger program.
Also, maybe more time than one week on such a project?
I've spent the better part of my downtime in the last 5 days working on this project, and it's still not done, which is a little ridiculous.
Perhaps I'm just slow, idk.
