//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAControlViewObject.h"

@class NSDate, NSObject<OS_dispatch_source>;

@interface TextFieldViewObject : MSAControlViewObject
{
    NSObject<OS_dispatch_source> *_eventSource;
    NSDate *_touchDownDate;
    struct CGPoint _lastTouchPoint;
}

@property(retain, nonatomic) NSDate *touchDownDate; // @synthesize touchDownDate=_touchDownDate;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *eventSource; // @synthesize eventSource=_eventSource;
- (void).cxx_destruct;

@end

