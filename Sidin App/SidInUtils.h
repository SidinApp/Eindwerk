//
//  BackendUtils.h
//  Sidin App
//
//  Created by  on 01/06/15.
//  Copyright (c) 2015 ehb.be. All rights reserved.
//

#import <Foundation/Foundation.h>

// http://stackoverflow.com/questions/3510862/constant-in-objective-c
// http://www.numbergrinder.com/2008/12/static-constant-strings-in-objective-c/

@interface SidInUtils : NSObject

extern NSString *const DEPARTEMENT_SERVICE_URL;

extern NSString *const TEACHER_SERVICE_URL;
extern NSString *const TEACHERS_SERVICE_URL;

extern NSString *const EVENT_SERVICE_URL;
extern NSString *const EVENTS_SERVICE_URL;

extern NSString *const SCHOOL_SERVICE_URL;
extern NSString *const SCHOOLS_SERVICE_URL;

extern NSString *const SUBSCRIPTION_SERVICE_URL;
extern NSString *const SUBSCRIPTIONS_SERVICE_URL;

@end
