//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Kensuke Nagae on 4/12/14.
//  Copyright (c) 2014 Kensuke Nagae. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;
@end
