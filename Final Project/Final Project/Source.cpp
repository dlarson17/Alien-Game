#include <iostream>
#include <string>
#include <vector>
#include "Dialogue.h"
#include "Death.h"
#include "Menus.h"
#include <fstream>
	using namespace std;
	int main() {
		

		char choice;

		Welcome w;
		w.welcome();

		do {
		cout << "1) Go Stay Put." << endl;
		cout << "2) Go Left." << endl;
		cout << "3) Go Straight." << endl;
		cout << "4) Go Right." << endl;
		cin >> choice;
		cout << endl << endl;
		if (choice > '4' || choice < '1'){
		cout << "That's not an option soldier!" << endl << endl;
		}

		} while (choice > '4' || choice < '1');
		return choice;
		
		
		

		switch (choice) {
		case '1'://stayput
		{
			AlienDeath d;
			d.alienStayPutDeath;


			break;
		}
		case '2': //left
		{
			AlienDeath d;
			d.alienDeadEndDeath;


			break;
		}
		case '3': //straight
		{
			Dialogue e;
			e.findBlaster;
			Menus k;
			k.YN;

			if (1) {
				Dialogue p;
				p.yesBlaster;

				//YNFightorRun();

				if (1) {
					AlienDeath d;
					d.alienFightDeath;
				}
				if (2) {
					AlienDeath d;
					d.alienRunNotFightDeath;
				}



				if (2) {
					Dialogue r;
					r.noBlaster;
					Menus w;
					w.liftRight;

					if (2) {
						Dialogue f;
						f.goRightPairedWithPowerLift;
						Death d;
						d.outerSpaceDeath;
					}
					if (1) {
						Dialogue b;
						b.powerLift;
						Dialogue q;
						q.explanation;
						Dialogue n;
						n.newObjective;
						Menus m;
						m.doorLift;


						if (1) {
							Death d;
							d.liftBreaksDeath;
						}
						if (2) {
							Dialogue y;
							y.doorOnFarSide;
							Menus o;
							o.fightRun;


							if (1) {
								AlienDeath i;
								i.alienFightDeath;

							}
							if (2) {
								Dialogue v;
								v.forkInPath;
								Menus e;
								e.leftRight;
								if (2) {
									AlienDeath l;
									l.alienDeadEndDeath;
								}
								if (2) {
									Dialogue s;
									s.soldier;
									Menus z;
									z.YN;//YNPickupsoldier()
									if (1) {
										AlienDeath a;
										a.alienTripDeath;

									}
									if (2) {
										Dialogue g;
										g.soldierTwo;
										Dialogue y;
										y.forkInPathTwo;
										Menus x;
										x.leftRight;

										if (1) {//left
											AlienDeath d;
											d.alienForkLeftDeath;
										}

										if (2) {//right
											Dialogue h;
											h.rightFork;
											Menus e;
											e.pods;



											if (1) {
												Death n;
												n.podExplodesDeath;
											}
											if (3) {
												AlienDeath z;
												z.alienPodDeath;
											}
											if (2) {
												ofstream ending;
												ending.open("Ending.txt");

												if (ending.fail()){
													cout << "Well you didn't, that's really unfortunate, this was supposed to work..." << endl;
													return 0;
												}
												ending.close();

											}
										}
									}
								}
							}
						}
					}

				}

				break;
			}
		case '4':
		{
			AlienDeath d;
			d.alienCeilingDeath;
			}




		default:
			break;
			}

		}
		return 0;
	}

	
	



