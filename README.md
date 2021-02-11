# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possibly pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Latest Commit Update</b>

Got the scoring system working, though not in the way I would have liked. The way it works is that the material editor defines the masks, which can be viewed individually using the 'Control' parameter. <b> This process only works correctly when in play mode. </b>  These can be then saved to a texture via the button in the details panel for BP_Wall instances, where you also select the texture that you want to save the mask to. When the player disengages with the turret, it calculates the player's score by using the UV locations that the player hit on the render target and matches that location to a pixel on the texture. As both the texture and the render target only use a Red channel, it is a simple multiplication then a multiplication offset based off the degree of burn that corresponds with that mask. No Burns/First Degree = 1, Second Degree/Third Degree = 10. 

<b> Next Steps </b>

My next steps for this project are:
- To make a UI for the hologram screen
- To create an option for applying cling film to the burnt area
- Design and implement a way to gather JSON data
- Design and create a proper level for the main game area
