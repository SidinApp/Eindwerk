//
//  ViewController.h
//  Sidin App
//
//  Created by  on 01/06/15.
//  Copyright (c) 2015 ehb.be. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface ViewController : UIViewController

//textfields
@property (weak, nonatomic) IBOutlet UITextField *tfVoornaam;
@property (weak, nonatomic) IBOutlet UITextField *tfFamilieNaam;
@property (weak, nonatomic) IBOutlet UITextField *tfEmail;
@property (weak, nonatomic) IBOutlet UITextField *tfStraat;
@property (weak, nonatomic) IBOutlet UITextField *tfGemeente;
@property (weak, nonatomic) IBOutlet UITextField *tfNummer;
@property (weak, nonatomic) IBOutlet UITextField *tfPostcode;
@property (weak, nonatomic) IBOutlet UITextField *tfSchool;

//switches
@property (weak, nonatomic) IBOutlet UISwitch *swDig;
@property (weak, nonatomic) IBOutlet UISwitch *swMultec;
@property (weak, nonatomic) IBOutlet UISwitch *swWerkStud;



@end

