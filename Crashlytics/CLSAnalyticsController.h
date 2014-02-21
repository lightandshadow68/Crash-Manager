//
//  CLSAnalyticsController.h
//  CrashManager
//
//  Created by Sasha Zats on 2/21/14.
//  Copyright (c) 2014 Sasha Zats. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CLSAnalyticsController : NSObject

+ (instancetype)sharedInstance;

- (void)enableAnalyticsIfNeeded;

@end