//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCContextEventLogger;
@protocol SCContextCardActionDelegate;

@interface SCContextCardActionExecutor : NSObject
{
    id <SCContextCardActionDelegate> _delegate;
    SCContextEventLogger *_eventLogger;
}

@property(retain, nonatomic) SCContextEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(nonatomic) __weak id <SCContextCardActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)preloadAction;
- (void)executeAction:(id)arg1;
- (id)init;

@end

