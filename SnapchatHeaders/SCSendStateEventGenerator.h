//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEventGenerator.h"

@protocol SCChatMessage;

@interface SCSendStateEventGenerator : SCEventGenerator
{
    id <SCChatMessage> _latestMessage;
}

- (void).cxx_destruct;
- (id)toInteractionEvent;
- (void)updateWithMessage:(id)arg1;
- (id)initWithChat:(id)arg1 generatorType:(long long)arg2;

@end
