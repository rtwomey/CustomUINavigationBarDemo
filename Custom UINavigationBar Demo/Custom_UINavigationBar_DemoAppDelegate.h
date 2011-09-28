//
//  Custom_UINavigationBar_DemoAppDelegate.h
//  Custom UINavigationBar Demo
//
//  Created by Ryan Twomey on 9/28/11.
//  Copyright 2011 Draconis Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Custom_UINavigationBar_DemoAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
