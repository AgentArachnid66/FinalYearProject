# FinalYearProject
 
This project will be looking into how to effectively use a Virtual Environment to train procedural memory to solve real world problems and improve practical skills in players. The main focus of the project is how to treat all degrees of burns. The main gameplay will involve a wall that looks like human skin, with different degrees of burns in various places, with the aim being to treat it as effectively as possible while avoiding possibly pitfalls in these sorts of situations. A major part of treating burns is running it under cold water for at least 10 minutes. I will recreate this and gamify it by making it a part of the game, where you have to maintain the right pressure of the water (as too harsh will create further complications for the burn) while keeping the subject warm and afterwards apply something like cling film to protect the burn from infection. 


Where I feel a lot of educational games go wrong is that they focus too much on the educational section of the genre. I think that a new approach is needed which is the teaching should be integrated into the game rather than the game integrated into the education. I want to make this game with the education integrated right into the main gameplay loop, while it being subtle in it's intent. 

<b>Latest Commit Update</b>

Got the control system working, by using one component that will be attached to the leap hands, and another that will follow that component. The follower component will be unable to leave a boundary, and I take the position from the centre of that boundary, normalize between -0.5 and 0.5 and apply that value to the turrets controls. While I was testing this, I found that it breaks when I rotate the boundary mesh, or when that boundary isn't a simple primitive. To fix this, I'm planning on implementing a system where the follower checks if it's still on the mesh and add an offset to it's position if it has strayed from the boundary. A smaller update is that I got the loading effect to only effect the elements that I want to using a custom stencil and depth value, which I can then isolate in the post processing and apply said processing solely onto that. Although at the moment, it produces an occulusion effect with the meshes silhouette in the scene. 

<b> Plans </b>
- For the JSON data collector, I'm planning to have an actor that will have links to all relevant actors, from which it can draw the relevant data at appropriate times.
- For the UI, I had the idea to have a pause menu implemented, so that when you look at the underside of your wrist it will appear there with clickable buttons and everything. I chose the underside of the wrist as it is relatively unexpected to occur during natural gameplay if implemented correctly.

<b> Next Steps </b>

- Make a proper UI on the console mesh
- Fix the aforementioned bugs
- Design and create a level
- Create a JSON data collector actor
My next steps
