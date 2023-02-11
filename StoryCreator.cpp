/*
** EPITECH PROJECT, 2023
** EverydayEpic
** File description:
** StoryCreator
*/

#include "Story.hpp"

ee::Story *createStory(std::shared_ptr<ee::Character> heroPtr, std::shared_ptr<ee::Character> badGuyPtr)
{

    int random_value = rand() % 3;

    /* Ville */
        /* First part*/
    ee::Story *story1 = new ee::Story(std::string("Votre histoire commence dans la ville. Préférez vous allez faire les courses ou à votre rendez-vous ?"), heroPtr->getDescription() + std::string(" in a town with a grocery store"), std::string("Faire ses courses"), std::string("Aller à votre RDV"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story2 = new ee::Story(std::string("Vous avez décidé de vous rendre à votre rendez-vous, mais vous apercevez un banc, souhaitez-vous vous arrêter au banc, ou continuer vers votre rendez-vous"), heroPtr->getDescription() + std::string(" in a street with a bench"), std::string("Aller à votre rendez-vous"), std::string("Vous arrêter sur le banc"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story3 = new ee::Story(std::string("Vous avez décidé d'aller faire vos courses, mais il faut traverser la route, pensez-vous qu'il est important de regarder avant de traverser ?"), heroPtr->getDescription() + std::string(" who will cross the road"), std::string("Traverser en regardant"), std::string("Traverser sans regarder"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story4 = new ee::Story(std::string("Vous avez traversé sans regarder, c'est dommage, vous venez de vous faire écraser par une camionette. Vous ferez attention la prochaine fois !"), heroPtr->getDescription() + std::string(" crossing the road who get shooted by a car"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story5 = new ee::Story(std::string("Vous avez bien fait de regarder avant de traverser, vous venez d'éviter de justesse la camionette qui roulait à toute allure ! Voulez vous entrer dans le magasin, ou commencer à courir ?"), heroPtr->getDescription() + std::string(" in front of a road, with a driving truck"), std::string("Entrer dans le magasin"), std::string("Se mettre à courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story6 = new ee::Story(std::string("Vous venez d'entrer dans le magasin, que souhaitez-vous acheter ?"), heroPtr->getDescription() + std::string(" in a store with water and alcohol"), std::string("De l'eau"), std::string("De l'alcool"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story7 = new ee::Story(std::string("Vous venez d'acheter de l'eau, voulez vous aller au parc, ou marcher dans la ville ?"), heroPtr->getDescription() + std::string(" walking in the street with a bottle of water"), std::string("Aller au parc"), std::string("Marcher dans la ville"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story8 = new ee::Story(std::string("Vous venez d'acheter de l'alcool, voulez vous aller au parc, ou marcher dans la ville ?"), heroPtr->getDescription() + std::string(" walking in the street with a bottle of alcohol"), std::string("Aller au parc"), std::string("Marcher dans la ville"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story9 = new ee::Story(std::string("Vous avez décidé de courir ! En avez-vous marre ou voulez-vous continuer à courir ?"), heroPtr->getDescription() + std::string(" running in the streets"), std::string("Partir marcher dans la ville"), std::string("Continuer à courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story10 = new ee::Story(std::string("Vous avez décidé de fuir ! Voulez-vous aller marcher dans la ville, ou continuer à courir ?"), heroPtr->getDescription() + std::string(" running in the street"), std::string("Partir marcher dans la ville"), std::string("Continuer à courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story12 = new ee::Story(std::string("Vous voulez vraiment aller à votre rendez-vous, êtes vous sûrs ?"), heroPtr->getDescription() + std::string(" in front of an hospital"), std::string("Oui, je veux y aller !"), std::string("En fait non, je préfère partir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story13 = new ee::Story(std::string("Vous êtes arrivés à votre RDV, voulez-vous vous installer dans la salle d'attente, ou fuir ?"), heroPtr->getDescription() + std::string(" in the waiting room of an hospital"), std::string("S'installer dans la salle d'attente"), std::string("Fuir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story14 = new ee::Story(std::string("Vous avez décidé de vous rendre à votre rendez-vous, et le médecin arrive pour vous demander d'entrer, voulez-vous rentrer ?"), heroPtr->getDescription() + std::string(" in the waiting room of an hospital"), std::string("Rentrer"), std::string("Faire un caprice et d'enfuir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story15 = new ee::Story(std::string("Le médecin vous annonce que vous avez été diagnostiqué d'une maladie incurable, vous êtes sur le point de mourir, vous n'allez Malheureusement pas pouvoir devenir un super-héros."), heroPtr->getDescription() + std::string(" who have cancer in a doctor's office"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story16 = new ee::Story(std::string("Vous avez décidé de faire un caprice et de fuir ! Voulez-vous aller marcher dans la ville, ou continuer à courir ?"), heroPtr->getDescription() + std::string(" running in the street"), std::string("Partir marcher dans la ville"), std::string("Continuer à courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story17 = new ee::Story(std::string("Vous avez décidé de ne pas aller à votre rendez-vous, voulez vous aller dans un parc, ou prendre votre voiture ?"), heroPtr->getDescription() + std::string(" in the street, in front of a park in his car"), std::string("Aller au parc"), std::string("Prendre la voiture"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story18 = new ee::Story(std::string("Vous venez d'entrer dans le parc, souhaitez-vous faire du running, ou vous asseoir sur un banc ?"), heroPtr->getDescription() + std::string(" in a park, in front of a bench"), std::string("Faire du running"), std::string("Vous asseoir sur un banc"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story19 = new ee::Story(std::string("Vous avez décidé de vous asseoir sur un banc, souhaitez vous dormir, ou nourrir les pigeons avant de partir en voiture ?"), heroPtr->getDescription() + std::string(" on a bench, with pigeons in front of him"), std::string("Dormir"), std::string("Nourrir les pigeons"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story20 = new ee::Story(std::string("Vous avez décidé de faire un running ! Voulez-vous aller marcher dans la ville, ou continuer à courir ?"), heroPtr->getDescription() + std::string(" running in the street"), std::string("Partir marcher dans la ville"), std::string("Continuer à courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story21 = new ee::Story(std::string("Un super-héros ne dort jamais ! Vous mourrez"), heroPtr->getDescription() + std::string(" sleeping sadly on a bench in a park"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story23 = new ee::Story(std::string("Après avoir nourri les pigeons, vous prenez la voiture, mais vous arrivez à une intersection, voulez-vous tourner à gauche ou à droite ?"), heroPtr->getDescription() + std::string(" in a car, in front of an intersection"), std::string("Tourner à gauche"), std::string("Tourner à droite"), heroPtr, badGuyPtr, ee::storyType::INGAME);

        /* Second part*/
    ee::Story *story90 = new ee::Story(std::string("Vous voilà arrivé à une intersection. Que faire?"), heroPtr->getDescription() + std::string(" in a car, in front of an intersection"), std::string("Aller à gauche"), std::string("Aller à droite"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story91 = new ee::Story(std::string("En tournant à gauche, vous vous faites percuter par une chèvre. n'ayant plus le choix vous sortez de votre voiture et vous tenter d'arrêter la chèvre. À ce moment un monsieur grognon s'énerve contre vous. Que faites vous ?"), heroPtr->getDescription() + std::string(" in his car. the car is hitted by a goat, and an angry man is coming in another car"), std::string("Discutez pacifiquement"), std::string("Le frapper"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story92 = new ee::Story(std::string("En tournant à droite. Vous êtes bloqué dans les embouteillages. Cela fait maintenant 20 minutes que vous êtes coincé. Vous sortez de votre véhicule et allez voir la personne à l'origine de ce grabuge. Arrivé devant lui, que faites vous ?"), heroPtr->getDescription() + std::string(" in the traffic, with an angry man in another car"), std::string("Discutez pacifiquement"), std::string("Le frapper"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story94 = new ee::Story(std::string("En vous battant avec lui, vous arrivez à parer quelque coups mais il est bien trop fort pour vous. Vous retournez dans votre véhicule en boîtant et en étant frustré. Pour se changer les idées, vous décidez de prendre l'autoroute. Au bout de quelques kilomètres, vous apercevez une personne blessée au bord de la route. Qu'allez vous faire ?"), heroPtr->getDescription() + std::string(" who is hurt in a car on the highway, with a hitchhiker on the side of the road"), std::string("Vous vous arrêtez et lui venez en aide"), std::string("Vous l'ignorez, c'est sans doute un autostoppeur"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story95 = new ee::Story(std::string("Vous tentez de discuter avec mais il n'est pas coopératif. Il vous mets un coup et vous tomber dans les vapes."), heroPtr->getDescription() + std::string(" getting hurt by someone on the side of the road"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story96 = new ee::Story(std::string("Vous vous arrêtez pour l'aider. Vous venez de le sauver. Vous êtes son super-héros !"), heroPtr->getDescription() + std::string(" taking a hitchhiker in his car"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story97 = new ee::Story(std::string("Vous continuez de rouler ?"), heroPtr->getDescription() + std::string(" driving in the highway"), std::string("Accélérer"), std::string("Ralentir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story98 = new ee::Story(std::string("Vous ralentissez tellement que vous vous êtes fait percuter par le camion derrière vous. Apprenez à conduire."), heroPtr->getDescription() + std::string(" in a car, getting hit by the truck behind him"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story99 = new ee::Story(std::string("Vous accélérez tellement que vous avez été flashé à 100 km/h au dessus du seuil autorisé. Vous vous faites arrêter par les gendarmes."), heroPtr->getDescription() + std::string(" getting stopped by the police"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story83 = new ee::Story(std::string("Vous marchez dans la ville depuis quelques minutes déjà. Deux voies s'ouvrent à vous, vers laquelle dirigez vous ?"), heroPtr->getDescription() + std::string(" walking in the street, with two directions in fornt of him"), std::string("Allez sur la place centrale"), std::string("Allez dans une petite ruelle sombre"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story81 = new ee::Story(std::string("Vous marchez dans la direction de la ruelle. Une fois dans la ruelle, votre ennemi vous tombe dessus et vous fracasse."), heroPtr->getDescription() + std::string(" getting hurt by someone in a little street"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story82 = new ee::Story(std::string("Vous arrivez sur la place centrale et vous voyez votre ennemi mettre le feu à une poubelle. Que faites vous ?"), heroPtr->getDescription() + std::string(" walking in the city, and seeing someone setting fire to a garbage can"), std::string("Éteindre le feu"), std::string("Arrêter votre ennemi"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story88 = new ee::Story(std::string("Vous arrêtez l'ennemi. Vous êtes le super-héros de la ville !"), heroPtr->getDescription() + std::string(" stopping someone setting fire to a garbage can"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story89 = new ee::Story(std::string("Vous éteignez le départ de flamme et vous sauvez la ville d'un terrible incendie. Vous êtes un super-héros !"), heroPtr->getDescription() + std::string(" stopping fire in a garbage can"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story84 = new ee::Story(std::string("Vous aperçevez un homme agresser une vielle dame. Voulez vous aller voir ?"), heroPtr->getDescription() + std::string(" seeing someone attacking an old lady"), std::string("Aller voir"), std::string("Continuer de courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story85 = new ee::Story(std::string("Vous aperçevez de la fumée sur la place centrale. Que faites vous ?"), heroPtr->getDescription() + std::string(" seeing smoke in the city"), std::string("Y aller"), std::string("Continuer de courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story86 = new ee::Story(std::string("Vous courez depuis tellement longtemps. Voulez-vous faire une pause ?"), heroPtr->getDescription() + std::string(" who is out of breath from running"), std::string("Oui, je prends une pause"), std::string("Non, je continue de courir"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story87 = new ee::Story(std::string("Vous courez depuis si longtemps que vous venez de gagnez un marathon. Vous êtes un super-héros !"),heroPtr->getDescription() + std::string("who won a marathon"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story101 = new ee::Story(std::string("Vous êtes asthmatique et vous n'arrivez pas à reprendre votre souffle. Vous vous asphyxiez."),heroPtr->getDescription() + std::string("who can't catch their breath"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story100 = new ee::Story(std::string("Voulez-vous le poursuivre ou aider la vieille dame ?"), heroPtr->getDescription() + std::string(" seeing someone running, and an old lady who seems hurt"), std::string("Le poursuivre"), std::string("Aider la vieille dame"), heroPtr, badGuyPtr, ee::storyType::INGAME);

    /* 91 à lié avec le 74 */
    /* Campagne */

    ee::Story *story_farm = new ee::Story(std::string("Votre histoire commence dans votre ferme. Préférez vous allez faire les récolter des carottes ou nourrir vos animaux ?"), heroPtr->getDescription() + std::string(" in a farm, with carrots, cows and chickens"), std::string("Aller à votre champ de carottes"), std::string("Aller nourrir vos animaux"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story24 = new ee::Story(std::string("Vous avez decidé de nourrir vos animaux. Préférez-vous nourrir vos vaches ou vos poules ?"), heroPtr->getDescription() + std::string(" in a farm with cows and chickens"), std::string("Aller nourrir les vaches"), std::string("Aller nourrir les poules"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story25 = new ee::Story(std::string("Vous avez décidé d'aller nourrir vos poules. Que souhaitez-vous faire ?"), heroPtr->getDescription() + std::string(" in a farm with chickens"), std::string("Ouvrir la porte du poulailler pour les nourrir"), std::string("Jeter la nourriture par dessus l'enclos"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story26 = new ee::Story(std::string("Vous avez décidé de jeter la nourriture des poules par dessus l'enclos. Que souhaitez-vous faire ensuite ?"), heroPtr->getDescription() + std::string(" in a farm in front of a chicken enclosure"), std::string("S'occuper de la récolte de carotte"), std::string("Aller nourrir les vaches"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story27 = new ee::Story(std::string("Vous choissisez d'ouvrir le poulailler. Attention une poule s'enfuit, que faites vous ?"), heroPtr->getDescription() + std::string(" in a farm with a chicken running out of the chicken coop"), std::string("Fermer la porte du poulailler"), std::string("Partez à la poursuite de la poule"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story28 = new ee::Story(std::string("Vous choissisez de fermer le poulailler. Durant la fermeture du poulailler, la poule fugitive est déjà trop loin pour que vous la rattrapiez. Que faites vous ?"), heroPtr->getDescription() + std::string(" in a farm with a chicken running"), std::string("S'occuper de la récolte de carotte"), std::string("Aller nourrir les vaches"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story29 = new ee::Story(std::string("Vous avez décidé de poursuivre la poule. Pendant votre course poursuite, toute vos poules se sont enfuient et malheureusement vous glissez et vous vous fracturez la colonne vertébrale."), heroPtr->getDescription() + std::string(" falling with a lot of chickens around him"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story30 = new ee::Story(std::string("Vous allez nourrir vos vaches. Quelles vaches voulez vous nourrir en premier ?"), heroPtr->getDescription() + std::string(" in a farm in front of 2 cows"), std::string("Les vaches laitières"), std::string("Les vaches à viande"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story31_32 = new ee::Story(std::string("Que souhaitez vous leur donner ?"), heroPtr->getDescription() + std::string(" in a farm in foront of 2 cows"), std::string("Du fourrage vert"), std::string("De la farine de viande"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story33 = new ee::Story(std::string("Vous leurs avez donné du fourage vert, excellent choix. Que comptez vous faire ensuite ?"), heroPtr->getDescription() + std::string(" giving grass to eat to a cow"), std::string("Inspectez vos vaches"), std::string("Récoltez vos carottes"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story34 = new ee::Story(std::string("Donner de la farine de viande n'est pas le meilleur choix..., vous venez de tuer vos vaches et vous êtes desormais endetté"), heroPtr->getDescription() + std::string(" being sad with a dead cow next to him"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story35 = new ee::Story(std::string("Vous avez décidé de les inspecter. Vers laquelle allez vous en premier ?"), heroPtr->getDescription() + std::string(" in a farm in front of 2 cows"), std::string("Allez voir Marguerite"), std::string("Allez voir Kiri"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story36 = new ee::Story(std::string("Vous avez décidé d'aller voir Kiri. Elle va parfaitement bien. Que souhaitez vous faire ?"), heroPtr->getDescription() + std::string(" checking a cow"), std::string("Allez voir Marguerite"), std::string("Allez récolter vos carottes"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story37 = new ee::Story(std::string("Vous avez décidé d'aller voir Marguertie. Elle est dans un état critique. Que faites vous ?"), heroPtr->getDescription() + std::string(" checking a hill cow"), std::string("La soigner"), std::string("Allez récolter vos carottes"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story39 = new ee::Story(std::string("Vous avez choisi de la soigner et elle vous en est très reconnaisante, vous êtes son super-héros !"), heroPtr->getDescription() + std::string(" checking a hill cow"), std::string("La soigner"), std::string("Allez récolter vos carottes"), heroPtr, badGuyPtr, ee::storyType::WIN);

    /* Récolte de carottes */

    ee::Story *story41 = new ee::Story(std::string("Vous avez décidé d'aller ceuillir des carottes, mais vous voyez que la moitié du champ est saccagée ! Que voulez-vous faire ?"), heroPtr->getDescription() + std::string(" in a carrot field"), std::string("Aller demander de l'aide au voisin"), std::string("Aller chercher de quoi replanter des carottes en ville"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story43 = new ee::Story(std::string("En allant voir le voisin, il vous dit que son tracteur a été saboté par un concurrent, c'est sûrement le même que celui qui a saccagé votre champ de carottes. Que faire ?"), heroPtr->getDescription() + std::string(" with another farmer looking to a broken tractor"), std::string("Partir à la maison du concurrent"), std::string("Aider le voisin à réparer son tracteur"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story44 = new ee::Story(std::string("Lors de la réparation du tracteur, vous remarquez le saboteur au loin qui revient ! Voulez décider d'aller lui parler"), heroPtr->getDescription() + std::string(" with a farmer repairing a tractor and seeing someone running"), std::string("Lui demander calmement pourquoi il fait ça"), std::string("L'agresser"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story45 = new ee::Story(std::string("Vous partez chez le concurrent, voulez vous sonner à la sonnette ou entrer en cachette ?"), heroPtr->getDescription() + std::string(" with another farmer in front of an house"), std::string("Sonner"), std::string("Entrer en cachette"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story46 = new ee::Story(std::string("Vous avez décidé d'entrer en cachette, mais vous vous faites avoir par un piège qu'il avait mis en place, et vous succombez"), heroPtr->getDescription() + std::string(" getting caught by a trap"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story47 = new ee::Story(std::string("Vous avez décidé de sonner à la porte, comment lui parlez-vous ?"), heroPtr->getDescription() + std::string(" with another farmer, in front of a doorway with someone else in the house"), std::string("Lui parler calmement pour savoir pourquoi il a fait ça"), std::string("Lui demander de nous aider"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story48 = new ee::Story(std::string("Vous lui parlez calmement et découvrez qu'il est en dépréssion, car sa ferme ne lui rapporte plus assez d'argent, et discutez avec lui pour trouver une solution afin de l'aider. Vous êtes un super-héros du quotidien qui vient de sauver quelqu'un ! Bravo !"), heroPtr->getDescription() + std::string(" talking to someone really sad"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story49 = new ee::Story(std::string("Vous lui demander de vous aider. Il vous avoue ne plus savoir quoi faire pour que les gens viennent acheter des produits à sa ferme, et accepte de vous aider, car vous l'avez aidé à trouver une solution. Félicitations, vous êtes un super-héros du quotidien car vous avez aidé ce fermier !"), heroPtr->getDescription() + std::string(" with two other farmers repairing a tractor"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story50 = new ee::Story(std::string("Vous décidez d'agresser le concurrent, il riposte et vous tue avec son fusil."), heroPtr->getDescription() + std::string(" getting shot by someone with a rifle"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);

    /* Montagne */

    ee::Story *story51 = new ee::Story(std::string("Votre histoire commence à la montagne. Voulez-vous rester au coin du feu, ou partir en randonnée ?"), heroPtr->getDescription() + std::string(" in a moutain house"), std::string("Rester au coin du feu"), std::string("Partir en randonnée"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story52 = new ee::Story(std::string("Vous avez décidé de rester au coin du feu. Vous recevez un appel d'un ami, mais il y a également quelqu'un qui sonne à votre porte. Que voulez-vous faire ?"), heroPtr->getDescription() + std::string(" in a moutain house, next to a fireplace"), std::string("Répondre à l'appel"), std::string("Ouvrir la porte"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story53 = new ee::Story(std::string("Vous avez décroché l'appel. C'est un ami qui vous propose d'aller au bar. Que faites-vous ?"), heroPtr->getDescription() + std::string(" next to a fireplace, calling someone on his phone"), std::string("Accepter"), std::string("Refuser, et aller ouvrir la porte à la personne qui a sonné"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story54 = new ee::Story(std::string("Vous avez décidé d'aller ouvrir la porte. Un voisin vous propose une raclette. Vous décider d'y aller. Voulez-vous beaucoup manger ?"), heroPtr->getDescription() + std::string(" talking to someone else in front of his door"), std::string("Beaucoup manger"), std::string("Manger peu"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story56 = new ee::Story(std::string("Vous avez accepté d'aller au bar, Voulez-vous y aller à pieds ou en voiture ?"), heroPtr->getDescription() + std::string(" in front of a car in the mountains"), std::string("Y aller à pieds"), std::string("Y aller en voiture"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story57 = new ee::Story(std::string("Vous avez pris la voiture mais vous vous retrouvez bloqué par une chèvre qui bloque la route. Que faire ?"), heroPtr->getDescription() + std::string(" in his car, blocked by a goat blocking the road"), std::string("S'en aller et aller au bar à pieds"), std::string("Essayer d'arrêter la chèvre"), heroPtr, badGuyPtr, ee::storyType::INGAME); //LIEN VERS 74 et 75
    ee::Story *story59 = new ee::Story(std::string("Après avoir bien mangé, vous décidez d'aller en ville. Malheureusement, il y a une grosse avalanche qui risque de vous tuer ! Vous trébucher, mais vous avez de la chance, vous êtes devenus obèse à cause de la raclette et vous roulez jusqu'à la ville et vous survivez à l'avalanche ! Où voulez-vous aller ?"), heroPtr->getDescription() + std::string(" being fat falling from the mountain with an avalanche behind him"), std::string("Aller au bar"), std::string("Aller au parc"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story60 = new ee::Story(std::string("Après avoir un peu mangé de la raclette, vous rentrez à la maison. Sauf qu'il y a une grosse avalanche qui vous fait trébucher. Vous n'avez pas beaucoup mangé, donc vous n'êtes pas assez gros pour rouler et éviter l'avalanche. Vous venez malheureusement de mourir dans l'avalanche."), heroPtr->getDescription() + std::string(" falling in an avalanche"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story61 = new ee::Story(std::string("Vous arrivez au bar. Que voulez-vous boire ?"), heroPtr->getDescription() + std::string(" in a bar"), std::string("Une bière"), std::string("Un soda"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story62 = new ee::Story(std::string("Vous arrivez au parc. Que voulez-vous faire ?"), heroPtr->getDescription() + std::string(" in a park"), std::string("Faire du running"), std::string("Vous asseoir sur un banc"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story63 = new ee::Story(std::string("Vous arrivez au bar à pieds sans problème. Que voulez-vous boire ?"), heroPtr->getDescription() + std::string(" in a bar"), std::string("Une bière"), std::string("Un soda"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story64 = new ee::Story(std::string("Vous n'arrivez pas à vous arrêter après une bière et enchaînez les boissons alcoolisées. Vous mourrez d'un coma éthylique."), heroPtr->getDescription() + std::string(" getting drunk, on the ground"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story65 = new ee::Story(std::string("Après avoir bu un bon soda. Vous sortez du bar, mais vous apercevez quelqu'un mettre le feu à une poubelle ! Que faites-vous ?"), heroPtr->getDescription() + std::string(" seeing someone setting fire to a trash can"), std::string("L'arrêter"), std::string("Èteindre le feu"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story66 = new ee::Story(std::string("Vous avez décidé de partir en randonnée, et vous voyez une chèvre au loin. Préférez-vous aller la voir, ou la fuir ?"), heroPtr->getDescription() + std::string(" walking in the mountain, with a goat in the distance"), std::string("Aller voir la chèvre"), std::string("Fuir la chèvre"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story67 = new ee::Story(std::string("Vous allez voir la chèvre, que voulez-vous faire ?"), heroPtr->getDescription() + std::string(" in front of a goat"), std::string("La frapper"), std::string("La caresser"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story68 = new ee::Story(std::string("Vous fuyez mais la chèvre vous poursuit jusqu'à la ville. Elle crée même un embouteillage, que voulez-vous faire ?"), heroPtr->getDescription() + std::string(" being chased by a goat"), std::string("Fuir"), std::string("Essayer d'arrêter la chèvre"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story69 = new ee::Story(std::string("Vous avez décidé de frapper la chèvre, quelle mauvaise idée, elle se venge et gagne le combat contre vous."), heroPtr->getDescription() + std::string(" fighting against a goat in the moutain"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story70 = new ee::Story(std::string("Vous avez décidé de caresser la chèvre. Elle vous suit jusqu'à la ville et finit même par créer un embouteillage. Que faites-vous"), heroPtr->getDescription() + std::string(" petting a goat in the moutain"), std::string("Vous fuyez"), std::string("Vous essayez d'arrêter la chèvre"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story74 = new ee::Story(std::string("Vous essayez d'arrêter la chèvre, mais vous voyez un homme sortir de sa voiture en vous insultant. Que faites-vous ?"), heroPtr->getDescription() + std::string(" running behind a goat in the moutain, with a man going out his car insulting him"), std::string("Vous vous battez avec lui"), std::string("Vous discutez calmement"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story75 = new ee::Story(std::string("Vous avez fui et vous retrouvez maintenant au bar. Que souhaitez vous boire ?"), heroPtr->getDescription() + std::string(" in a bar"), std::string("Une bière"), std::string("Du soda"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story76 = new ee::Story(std::string("Vous vous battez avec l'homme, et vous gagnez ! Il retourne à sa voiture. Vous voyez alors une dame se faire voler son sac. Elle a l'air blessée ! Que faire ?"), heroPtr->getDescription() + std::string(" seeing an old lady getting hurt by someone"), std::string("Courir après le voleur"), std::string("Aller aider la dame blessée"), heroPtr, badGuyPtr, ee::storyType::INGAME);
    ee::Story *story77 = new ee::Story(std::string("Vous essayez de discuter calmement, mais il vous frappe subitement et vous succombez à vos blessures."), heroPtr->getDescription() + std::string(" getting hit by an angry man in the highway"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::LOOSE);
    ee::Story *story78 = new ee::Story(std::string("Vous courez après le voleur, et réussissez à l'attraper ! Vous le livrez à la police et vous êtes un super-héros ! Vous venez de sauver la ville !"), heroPtr->getDescription() + std::string(" stopping a running robber"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);
    ee::Story *story79 = new ee::Story(std::string("Vous aidez la pauvre dame blessée, et vous l'emmenez à l'hôpital. Vous venez de lui sauver la vie, vous êtes un super-héros !"), heroPtr->getDescription() + std::string(" carrying an old lady to the hospital"), std::string(""), std::string(""), heroPtr, badGuyPtr, ee::storyType::WIN);

    story1->setAChoicePtr(story3);
    story1->setBChoicePtr(story2);

    story2->setAChoicePtr(story12);
    story2->setBChoicePtr(story18);

    story3->setAChoicePtr(story4);
    story3->setBChoicePtr(story5);

    story5->setAChoicePtr(story6);
    story5->setBChoicePtr(story9);

    story6->setAChoicePtr(story7);
    story6->setBChoicePtr(story8);

    story7->setAChoicePtr(story18);
    story7->setBChoicePtr(story83);

    story8->setAChoicePtr(story18);
    story8->setBChoicePtr(story83);

    story9->setAChoicePtr(story83);
    story9->setBChoicePtr(story84);

    story10->setAChoicePtr(story83);
    story10->setBChoicePtr(story84);

    story12->setAChoicePtr(story13);
    story12->setBChoicePtr(story17);

    story13->setAChoicePtr(story14);
    story13->setBChoicePtr(story10);

    story14->setAChoicePtr(story15);
    story14->setBChoicePtr(story16);

    story16->setAChoicePtr(story83);
    story16->setBChoicePtr(story84);

    story17->setAChoicePtr(story18);
    story17->setBChoicePtr(story23);

    story18->setAChoicePtr(story20);
    story18->setBChoicePtr(story19);

    story19->setAChoicePtr(story21);
    story19->setBChoicePtr(story23);

    story20->setAChoicePtr(story83);
    story20->setBChoicePtr(story84);

    story23->setAChoicePtr(story91);
    story23->setBChoicePtr(story92);

    story90->setAChoicePtr(story91);
    story90->setBChoicePtr(story92);

    story91->setAChoicePtr(story76);
    story91->setBChoicePtr(story77);

    story92->setAChoicePtr(story76);
    story92->setBChoicePtr(story77);

    story94->setAChoicePtr(story96);
    story94->setBChoicePtr(story97);

    story97->setAChoicePtr(story98);
    story97->setBChoicePtr(story99);

    story83->setAChoicePtr(story81);
    story83->setBChoicePtr(story82);

    story82->setAChoicePtr(story89);
    story82->setBChoicePtr(story88);

    story84->setAChoicePtr(story100);
    story84->setBChoicePtr(story85);

    story85->setAChoicePtr(story82);
    story85->setBChoicePtr(story86);

    story86->setAChoicePtr(story101);
    story86->setBChoicePtr(story87);

    story100->setAChoicePtr(story78);
    story100->setBChoicePtr(story79);

    story_farm->setAChoicePtr(story24);
    story_farm->setBChoicePtr(story25);

    story24->setAChoicePtr(story25);
    story24->setBChoicePtr(story30);

    story25->setAChoicePtr(story26);
    story25->setBChoicePtr(story27);

    story26->setAChoicePtr(story41);
    story26->setBChoicePtr(story30);

    story27->setAChoicePtr(story28);
    story27->setBChoicePtr(story29);

    story28->setAChoicePtr(story41);
    story28->setBChoicePtr(story30);

    story30->setAChoicePtr(story31_32);
    story30->setBChoicePtr(story31_32);

    story31_32->setAChoicePtr(story33);
    story31_32->setBChoicePtr(story34);

    story33->setAChoicePtr(story35);
    story33->setBChoicePtr(story41);

    story35->setAChoicePtr(story37);
    story35->setBChoicePtr(story36);

    story36->setAChoicePtr(story37);
    story36->setBChoicePtr(story41);

    story37->setAChoicePtr(story39);
    story37->setBChoicePtr(story41);

    story41->setAChoicePtr(story43);
    story41->setBChoicePtr(story90);

    story43->setAChoicePtr(story45);
    story43->setBChoicePtr(story44);

    story44->setAChoicePtr(story48);
    story44->setBChoicePtr(story50);

    story45->setAChoicePtr(story47);
    story45->setBChoicePtr(story46);

    story47->setAChoicePtr(story48);
    story47->setBChoicePtr(story49);

    story51->setAChoicePtr(story52);
    story51->setBChoicePtr(story66);

    story52->setAChoicePtr(story53);
    story52->setBChoicePtr(story54);

    story53->setAChoicePtr(story56);
    story53->setBChoicePtr(story54);

    story54->setAChoicePtr(story59);
    story54->setBChoicePtr(story60);

    story56->setAChoicePtr(story63);
    story56->setBChoicePtr(story57);

    story57->setAChoicePtr(story63);
    story57->setBChoicePtr(story74);

    story59->setAChoicePtr(story61);
    story59->setBChoicePtr(story62);

    story61->setAChoicePtr(story64);
    story61->setBChoicePtr(story65);

    story62->setAChoicePtr(story20);
    story62->setBChoicePtr(story19);

    story63->setAChoicePtr(story64);
    story63->setBChoicePtr(story65);

    story65->setAChoicePtr(story88);
    story65->setBChoicePtr(story89);

    story66->setAChoicePtr(story67);
    story66->setBChoicePtr(story68);

    story67->setAChoicePtr(story69);
    story67->setBChoicePtr(story70);

    story68->setAChoicePtr(story75);
    story68->setBChoicePtr(story74);

    story70->setAChoicePtr(story75);
    story70->setBChoicePtr(story74);

    story74->setAChoicePtr(story76);
    story74->setBChoicePtr(story77);

    story75->setAChoicePtr(story64);
    story75->setBChoicePtr(story65);

    story76->setAChoicePtr(story78);
    story76->setBChoicePtr(story79);


    ee::Story *start[3] = {story1, story_farm, story51};
    return start[random_value];
}
