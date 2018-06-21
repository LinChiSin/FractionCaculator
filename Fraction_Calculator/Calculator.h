//
//  Calculator.h
//  Fraction_Calculator
//
//  Created by zhixinglin on 2018/6/21.
//  Copyright © 2018 zhixinglin. All rights reserved.
//

#ifndef Calculator_h
#define Calculator_h


#endif /* Calculator_h */

#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1, *operand2,*accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
