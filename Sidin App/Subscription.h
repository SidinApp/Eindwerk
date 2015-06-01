//
//  Subscription.h
//  Sidin App
//
//  Created by  on 01/06/15.
//  Copyright (c) 2015 ehb.be. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Teacher.h"
#import "Event.h"
#import "School.h"

@interface Subscription : NSObject

@property long id;
@property NSString *firstName;
@property NSString *lastName;
@property NSString *email;
@property NSString *street;
@property NSString *streetNumber;
@property NSString *zip;
@property NSString *city;
@property NSMutableDictionary *interests;
@property NSDate *timestamp;
@property BOOL isNew;
@property Teacher *teacher;
@property Event *event;
@property School *school;

@end
