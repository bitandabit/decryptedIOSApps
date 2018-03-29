//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableString, NSString, UITextView, UIView;

@interface SCCraftDebugger : NSObject
{
    NSMutableString *_debugString;
    UITextView *_debugTextView;
    NSMutableDictionary *_eventDates;
    NSString *_session;
    UIView *_debugView;
}

@property(retain, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
- (void).cxx_destruct;
- (void)setupDebugView;
- (void)longPressWithTwoTouches:(id)arg1;
- (id)getDebugGestureRecognizer;
- (void)stopTimingEvent:(id)arg1;
- (void)startTimingEvent:(id)arg1;
- (void)log:(id)arg1 value:(id)arg2;
- (void)setSession:(id)arg1;
- (id)init;

@end

