    {
                SetConsoleTextAttribute(color,rand()%16) ;
                cout <<"                                                        " << copytextline << endl  ;
                 r++ ;
             }
            }
           
        } //ทำเสร็จสักที วู้ว
    Scoreboardfile.close() ;
    }
    SetConsoleTextAttribute(color,2) ;
    cout << "«───────────────────────────────────────────────────── « .⋅ εïз ⋅. » ─────────────────────────────────────────────────────»" << endl ;
    cout <<"Press Enter to go home" ;
    cin.get() ;
    main() ;
}
}