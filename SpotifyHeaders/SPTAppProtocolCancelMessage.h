//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPCancelMessage.h"

@class NSDictionary, NSString;

@interface SPTAppProtocolCancelMessage : SPTAppProtocolWAMPMessage <SPTWAMPCancelMessage>
{
    unsigned long long _callRequestID;
    NSDictionary *_options;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long callRequestID; // @synthesize callRequestID=_callRequestID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
- (id)rawMessage;
- (long long)messageType;
- (id)initWithCallRequestID:(unsigned long long)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

