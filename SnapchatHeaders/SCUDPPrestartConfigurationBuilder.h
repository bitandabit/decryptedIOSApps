//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCUDPPrestartConfigurationBuilder : NSObject
{
    NSString *_prestartToken;
    NSString *_prestartPrefix;
    NSString *_prestartPort;
    NSString *_prestartHostname;
}

+ (id)withUDPPrestartConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)setPrestartHostname:(id)arg1;
- (id)setPrestartPort:(id)arg1;
- (id)setPrestartPrefix:(id)arg1;
- (id)setPrestartToken:(id)arg1;
- (id)build;

@end

