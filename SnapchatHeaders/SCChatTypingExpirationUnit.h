//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface SCChatTypingExpirationUnit : NSObject
{
    NSDate *_expirationTimestamp;
    CDUnknownBlockType _expirationHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (void).cxx_destruct;
- (id)initWithExpirationTimestamp:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

@end

