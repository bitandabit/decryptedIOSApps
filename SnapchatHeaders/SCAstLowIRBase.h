//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCAstLowIRBase : NSObject
{
    unsigned short _opcode;
    long long _instructionIndex;
    long long _result;
    NSString *_name;
}

+ (id)null;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long instructionIndex; // @synthesize instructionIndex=_instructionIndex;
@property(nonatomic) unsigned short opcode; // @synthesize opcode=_opcode;
- (void).cxx_destruct;
- (CDStruct_135e654f)canonicalForm;
- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
- (_Bool)replaceVariable:(long long)arg1 withANewVariable:(long long)arg2;
- (void)registerRecognition:(id)arg1;
- (void)allocNamedRoRAM:(id)arg1 defaultValues:(id)arg2;
- (void)allocConstant:(id)arg1;

@end

