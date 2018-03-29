//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCUDPPrestartConfiguration-Protocol.h"

@class NSString;

@interface SCUDPPrestartConfiguration : NSObject <SCUDPPrestartConfiguration>
{
    NSString *_prestartToken;
    NSString *_prestartPrefix;
    NSString *_prestartPort;
    NSString *_prestartHostname;
}

@property(readonly, copy, nonatomic) NSString *prestartHostname; // @synthesize prestartHostname=_prestartHostname;
@property(readonly, copy, nonatomic) NSString *prestartPort; // @synthesize prestartPort=_prestartPort;
@property(readonly, copy, nonatomic) NSString *prestartPrefix; // @synthesize prestartPrefix=_prestartPrefix;
@property(readonly, copy, nonatomic) NSString *prestartToken; // @synthesize prestartToken=_prestartToken;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrestartToken:(id)arg1 prestartPrefix:(id)arg2 prestartPort:(id)arg3 prestartHostname:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

