//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSMutableArray;

@interface SCMP4Representation : NSObject
{
    _Bool _canEditSCMetadata;
    NSFileHandle *_inputFileHandle;
    NSMutableArray *_rootLevelBoxes;
    unsigned long long _moovBoxIndex;
}

+ (id)representationFromURL:(id)arg1 error:(id *)arg2;
@property(nonatomic) unsigned long long moovBoxIndex; // @synthesize moovBoxIndex=_moovBoxIndex;
@property(nonatomic) _Bool canEditSCMetadata; // @synthesize canEditSCMetadata=_canEditSCMetadata;
@property(retain, nonatomic) NSMutableArray *rootLevelBoxes; // @synthesize rootLevelBoxes=_rootLevelBoxes;
@property(retain, nonatomic) NSFileHandle *inputFileHandle; // @synthesize inputFileHandle=_inputFileHandle;
- (void).cxx_destruct;
- (_Bool)outputToURL:(id)arg1 error:(id *)arg2;
- (void)setSCMetadata:(id)arg1 forKey:(id)arg2;
- (id)scMetadataForKey:(id)arg1;
- (id)scMetadataBlockCreateIfNotFound:(_Bool)arg1;
- (_Bool)canEditSCMetadataOnInitError:(id *)arg1;
- (id)initWithFileHandle:(id)arg1 error:(id *)arg2;
- (id)init;

@end

