//
//  Subscription.h
//  Sidin App
//
//  Created by  on 03/06/15.
//  Copyright (c) 2015 ehb.be. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event, Interest, School, Teacher;

@interface Subscription : NSManagedObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSString * streetNumber;
@property (nonatomic, retain) NSString * zip;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSNumber * isNew;
@property (nonatomic, retain) Event *event;
@property (nonatomic, retain) Teacher *teacher;
@property (nonatomic, retain) School *school;
@property (nonatomic, retain) Interest *interests;

@end
