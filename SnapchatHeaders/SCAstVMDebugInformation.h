//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSData, NSDictionary;

@interface SCAstVMDebugInformation : NSObject <NSCoding>
{
    NSArray *_lineNames;
    NSDictionary *_registerPos;
    NSData *_instructions;
    NSData *_constantMemory;
    NSArray *_featureKeys;
    NSData *_featureDefaultValues;
}

- (void).cxx_destruct;
- (id)decodeLineInformationWithRegisterMemory:(float *)arg1 features:(id)arg2;
- (id)_decodeLineInfomationAtindex:(long long)arg1 registerMemory:(float *)arg2 features:(id)arg3;
- (float)_astVMLoad:(unsigned short)arg1 registerMemory:(float *)arg2 features:(id)arg3;
- (float)floatValueForRegisterDescription:(id)arg1 registerMemory:(float *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowIR:(id)arg1 registers:(id)arg2 instructions:(id)arg3 constantMemory:(id)arg4 featureKeys:(id)arg5 featureDefaultValues:(id)arg6;

@end
