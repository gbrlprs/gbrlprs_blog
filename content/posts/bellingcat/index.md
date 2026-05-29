---
title: "Bellingcat’s Archive 2025: How I completed all challenges in one day"
date: 2026-05-26
draft: false    
---
# What is Bellingcat?

[Bellingcat](https://www.bellingcat.com/) is an independent investigative collective of researchers, investigators and citizen journalists brought together by a passion for open source research. 

Founded in 2014, they have pioneered the use of open source research methods to investigate a variety of subjects of public interest. These range from the shooting down of flight MH17 over eastern Ukraine to police violence in Colombia and the illegal wildlife trade in the UAE. Their research is regularly referenced by international media and has been cited by several courts and investigative missions.

They design and share verifiable methods of ethical digital investigation. By publishing walkthroughs to open source research methods and holding tailored training sessions on their use for journalists, human rights activists and members of the public, they’re broadening the scope and application of open source research.

With over 30 staff and contributors in more than 20 countries, we operate in a unique field where advanced technology, forensic research, journalism, transparency and accountability come together. 

They believe in the need for collaboration and have partnered with news organisations across the globe. Likewise, Bellingcat’s Global Authentication Project (GAP) seeks to harness the power of the open source community by nurturing and encouraging a network of volunteer investigators. 

# How do their open source challenges work?

The complexity of these investigations reinforced something fundamental about the maturity of the modern internet: meaningful analysis requires depth of understanding before interpretation. Each challenge required a combination of advanced OSINT and analytical techniques across multiple domains.


### Multispectral Sightings
This investigation revolved around geolocation under heavily altered multispectral imagery tied to a very narrow timeframe. Traditional visual anchors became unreliable almost immediately, forcing the analysis toward environmental consistency, temporal constraints, and indirect spatial correlation rather than recognizable landmarks.
The challenge highlighted how geolocation increasingly depends less on obvious identifiers and more on understanding how environments behave under transformed or degraded visual conditions.
#### Tools used:


### Breaking News
At first glance, this appeared deceptively simple: identifying relevant information hidden within a large volume of nearly identical links and reports. In practice, the real difficulty came from filtering signal from noise while dealing with non-intuitive geolocation cues and fragmented contextual references.
The investigation became less about searching directly and more about constructing exclusion criteria until only a plausible chain of attribution remained.
#### Tools used:

### Lost in Translation
Exact question proposed: Some conversations can be difficult to understand when you don't speak the language. Even if you do, without context, it can be hard to track down.
In which city was this audio recorded? (mp3 audio attached of two people speaking)

This was arguably the most conceptually unusual challenge. The task centered around analyzing extremely limited and difficult-to-obtain audio recordings before arriving at a final question that initially seemed almost unreasonable: determining the city in which the recording was captured.
This was my specific process for finishing this particular challenge in under 27 minutes.
1. Realised during my first time hearing the audio that both languages spoken were korean and russian. 
2. Analyzed regions in which those may occur more often (no verifiable outcomes)
3. Went back to the first step, clipped the audio in half (part korean and part russian).
4. Went to an online translator from mp3 to txt. and did that with both audio files.
5. Got the translation for both sides, the results:
6. Russian (translated):
“*Recently you have been conducting very active foreign policy activities.
I thought it would be best to meet you not in Pyongyang but here, because you can rest a bit here.
Also, you are the first foreign guest of our city, and I am very pleased that we are meeting here.
The ambassador came first. He conveyed a message of cooperation and friendship between our countries.*”
7. Got a glitched yet interesting outcome “Ambassador Hستتpassali”
8. At the same time I found the glitch, I also realised I could've enum the amount of Ambassadors that have visited DRPK.
9. Found a list containing diplomats and ambassadors that have visited North Korea, but didn't stricly stay in Pyongyang.
10. Checked correctly the city first try after confirming which previous ambassador had visited the person speaking korean in the audio.
#### Tools used: 
- **Google Maps**
- **Windows ClipChamp**
- **Google Translate**
- **AudioToText Software**

The solution depended on combining environmental audio analysis, linguistic inference, contextual elimination, and subtle infrastructural indicators. It demonstrated how intelligence attribution often emerges from weak signals that appear meaningless in isolation but become useful when layered together systematically.


### Climate Question
This challenge focused on obfuscated open-source data reconstructed through frame-by-frame analysis. The investigation required identifying fragments of foreign-language speech and correlating them against contextual indicators surrounding the 2025 United Nations COP30 timeframe.
#### Tools used:

What made the exercise compelling was the necessity of moving between visual analysis, temporal reconstruction, translation inference, and geopolitical context simultaneously. No single method produced the answer independently.

### The Frozen North
The most technically disorienting challenge involved a combination of reverse timeframing, maritime intelligence analysis, and unconventional geolocation across Arctic Circle ports and vessels. The investigation incorporated vessel tracking logic, IMO attribution, reverse URL analysis, and timeline reconstruction under incomplete information.
#### Tools used:

All of these challenges took me in between 30 to 90 minutes to complete.  
This is a great view into the world of intelligence gathering, analysis and conclusion. Challenges like these strengthen my analytical techniques by correlating and attributing intelligence for structured reasoning.

![Archives](feature1.png)
