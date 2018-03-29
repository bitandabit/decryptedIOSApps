//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPAbortMessage.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolAbortMessage : SPTAppProtocolWAMPMessage <SPTWAMPAbortMessage>
{
    NSDictionary *_details;
    NSString *_reason;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
@property(readonly, copy, nonatomic) NSString *message;
- (id)initWithDetails:(id)arg1 reason:(id)arg2;
- (id)initWithMessage:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

