//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SCAlertViewFlow : NSObject
{
    NSMutableArray *_alertViewQueue;
}

- (void).cxx_destruct;
- (id)alertViewQueue;
- (void)removeAlertView:(id)arg1;
- (id)dequeueAlertView;
- (void)enqueueAlertView:(id)arg1;
- (id)initWithAlertViews:(id)arg1;

@end

