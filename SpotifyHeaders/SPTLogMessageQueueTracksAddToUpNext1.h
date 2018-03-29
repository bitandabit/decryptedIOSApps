//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSArray, NSString;

@interface SPTLogMessageQueueTracksAddToUpNext1 : SPTLogMessage
{
    NSString *_contextUriValue;
    NSString *_currentTrackUriValue;
    NSArray *_targetTracksUriValue;
}

+ (id)messageWithContextUri:(id)arg1 currentTrackUri:(id)arg2 targetTracksUri:(id)arg3;
@property(retain, nonatomic) NSArray *targetTracksUriValue; // @synthesize targetTracksUriValue=_targetTracksUriValue;
@property(retain, nonatomic) NSString *currentTrackUriValue; // @synthesize currentTrackUriValue=_currentTrackUriValue;
@property(retain, nonatomic) NSString *contextUriValue; // @synthesize contextUriValue=_contextUriValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

