//
//  BirdWatchingDetailViewController.h
//  BirdWatching
//
//  Created by Kensuke Nagae on 4/12/14.
//  Copyright (c) 2014 Kensuke Nagae. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdWatchingDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
