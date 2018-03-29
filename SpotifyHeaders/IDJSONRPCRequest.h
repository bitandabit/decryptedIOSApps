//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDJSONRPCMessage.h"

@class NSDictionary, NSString, NSUUID;

@interface IDJSONRPCRequest : NSObject <IDJSONRPCMessage>
{
    NSString *_version;
    NSUUID *_identifier;
    NSString *_method;
    NSDictionary *_parameters;
}

+ (id)new;
@property(readonly) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy) NSString *method; // @synthesize method=_method;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)JSONRepresentation;
- (id)stringRepresentation;
@property(readonly, nonatomic) unsigned long long messageType;
- (id)init;
- (id)initWithVersion:(id)arg1 identifier:(id)arg2 method:(id)arg3 parameters:(id)arg4;
- (id)initWithJSONRPCString:(id)arg1;
- (id)initWithMethod:(id)arg1 parameters:(id)arg2;
- (id)initWithMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
