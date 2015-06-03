//
//  Teacher.h
//  Sidin App
//
//  Created by  on 03/06/15.
//  Copyright (c) 2015 ehb.be. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Teacher : NSManagedObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * acadyear;

@end
