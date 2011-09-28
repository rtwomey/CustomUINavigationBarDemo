//
//  DefaultNavViewController.h
//  Custom UINavigationBar Demo
//
//  Created by Ryan Twomey on 9/28/11.
//  Copyright 2011 Draconis Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ResultViewController;

@interface DefaultNavViewController : UITableViewController {
	ResultViewController* resultViewController;
}

@property(nonatomic, retain) IBOutlet ResultViewController* resultViewController;

@end
