//
//  ViewController.h
//  Alcolator
//
//  Created by RH Blanchfield on 3/2/15.
//  Copyright (c) 2015 bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;


- (void)buttonPressed:(UIButton *)sender;



@end
