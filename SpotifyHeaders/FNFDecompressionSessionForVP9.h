//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFDecompressionSession.h"

@interface FNFDecompressionSessionForVP9 : NSObject <FNFDecompressionSession>
{
}

- (struct CGSize)inputSize;
- (unsigned char)canAcceptFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 iFrame:(unsigned long long)arg2;
- (id)description;
- (void)closeSession;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 numOfDecoderThreads:(unsigned int)arg4 async:(_Bool)arg5 timerManager:(id)arg6;
- (id)initWithDelegate:(id)arg1 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg2 videoSize:(struct CGSize)arg3 async:(_Bool)arg4 timerManager:(id)arg5;

@end

