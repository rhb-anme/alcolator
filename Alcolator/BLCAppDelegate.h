//
//  AppDelegate.h
//  Alcolator
//
//  Created by RH Blanchfield on 3/2/15.
//  Copyright (c) 2015 bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate>

- (BOOL)tabBarController:(UITabBarController *)tabBarController
shouldSelectViewController:(UIViewController *)viewController;

@property (strong, nonatomic) UIWindow *window;

@end
