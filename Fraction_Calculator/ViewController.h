//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by zhixinglin on 2018/6/21.
//  Copyright © 2018 zhixinglin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Calculator.h"


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//数字键

-(IBAction)clickDigit:(UIButton *) sender;

//算术操作键

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

//Misc键
-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;

@end

