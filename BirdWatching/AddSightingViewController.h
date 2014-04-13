//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Kensuke Nagae on 4/12/14.
//  Copyright (c) 2014 Kensuke Nagae. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;
@end
