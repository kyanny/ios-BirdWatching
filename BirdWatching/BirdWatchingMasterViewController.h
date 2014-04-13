//
//  BirdWatchingMasterViewController.h
//  BirdWatching
//
//  Created by Kensuke Nagae on 4/12/14.
//  Copyright (c) 2014 Kensuke Nagae. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;
@interface BirdWatchingMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;
- (IBAction)done:(UIStoryboardPopoverSegue *)segue;
- (IBAction)cancel:(UIStoryboardPopoverSegue *)segue;
@end
