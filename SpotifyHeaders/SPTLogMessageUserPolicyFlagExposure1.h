//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUserPolicyFlagExposure1 : SPTLogMessage
{
    NSString *_flagValue;
    NSString *_valueValue;
}

+ (id)messageWithFlag:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *valueValue; // @synthesize valueValue=_valueValue;
@property(retain, nonatomic) NSString *flagValue; // @synthesize flagValue=_flagValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
