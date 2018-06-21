//
//  Fraction.h
//  Fraction_Calculator
//
//  Created by zhixinglin on 2018/6/21.
//  Copyright © 2018 zhixinglin. All rights reserved.
//

#ifndef Fraction_h
#define Fraction_h


#endif /* Fraction_h */


@interface Fraction : NSObject

@property int numerator,denominator;

-(void) print;
-(void) setTo:(int) n over: (int) d;
-(Fraction *) add:(Fraction *) f;
-(Fraction *) subtract:(Fraction *) f;
-(Fraction *) multiply: (Fraction *) f;
-(Fraction *) divide: (Fraction *) f;
-(void) reduce;
-(double) convertToNum;
-(NSString *) convertToString;

@end
