//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAstLowIRBase.h"

@interface SCAstLowIRConstant : SCAstLowIRBase
{
    unsigned long long _constantIndex;
    float _value;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
@property(readonly, nonatomic) long long constant;
- (void)registerRecognition:(id)arg1;
- (void)allocConstant:(id)arg1;
- (id)initWithConstant:(float)arg1;

@end

