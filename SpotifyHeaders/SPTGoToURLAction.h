//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL;

@interface SPTGoToURLAction : SPAction
{
    NSURL *_url;
    NSString *_actionTitle;
    NSString *_actionLogEventName;
}

@property(retain, nonatomic) NSString *actionLogEventName; // @synthesize actionLogEventName=_actionLogEventName;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithURL:(id)arg1 title:(id)arg2 logEventName:(id)arg3 order:(long long)arg4 logContext:(id)arg5;

@end

