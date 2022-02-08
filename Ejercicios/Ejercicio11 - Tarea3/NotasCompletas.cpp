#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	
	//Datos de entrada
	int nota = 0;

	cout << "***** CALIFICACION ESCOLARES ******" << endl << endl;

	cout << "Ingrese la Nota: ";
	cin >> nota;
	
	//Proceso

		if(nota >= 95 && nota <= 100) {
			cout << "Es una A++";
		} else {
			if(nota >= 90 && nota <= 94) {
				cout << "Es una A+";
			} else {
				if(nota >= 85 && nota <= 89) {
					cout << "Es una A";
				} else {
					if(nota >= 80 && nota <= 84) {
						cout << "Es una A-";
					} else {
						if(nota >= 75 && nota <= 79) {
							cout << "Es una B+";
						} else {
							if(nota >= 70 && nota <= 74) {
								cout << "Es una B";
							} else {
								if(nota >= 65 && nota <= 69) {
									cout << "Es una B-";
								} else {
									if(nota >= 60 && nota <= 64) {
										cout << "¡Es minimo aprobado!";
									} else {
										if(nota >= 55 && nota <= 59) {
											cout << "Es una C";
										} else {
											if(nota >= 50 && nota <= 54) {
												cout << "Es una C-";
											} else {
												if(nota >= 45 && nota <= 49) {
													cout << "Es una D+";
												} else {
													if(nota >= 40 && nota <= 44) {
														cout << "Es una D";
													} else {
														if(nota >= 35 && nota <= 39) {
															cout << "Es una D-";
														} else {
															if(nota >= 30 && nota <= 34) {
																cout << "Es una E+";
															} else{
																if(nota >= 25 && nota <= 29) {
																	cout << "Es una E";
																} else {
																	if(nota >= 20 && nota <= 24) {
																		cout << "Es una E-";
																	} else {
																		if(nota >= 15 && nota <= 19) {
																			cout << "Es una F+";
																		} else {
																			if(nota >= 10 && nota <= 14) {
																				cout << "Es una F";
																			} else {
																				if(nota >= 0 && nota <= 9) {
																					cout << "Es una F--";
																				} 																				
																			}																			
																		}																	
																	} 																	
																}
															}															
														}														
													}								
												}	 
											}											
										}										
									}
								}
							}
						}
					}
				}		
			}		
		}

	return 0;
}
