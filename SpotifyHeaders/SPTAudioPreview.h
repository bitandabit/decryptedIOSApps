//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTID3ParserDelegate.h"

@class CADisplayLink, NSMapTable, NSMutableData, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL, SPTDataLoader, SPTID3Parser;

@interface SPTAudioPreview : NSObject <SPTDataLoaderDelegate, SPTID3ParserDelegate>
{
    struct OpaqueAudioFileStreamID *_audioFileStream;
    struct OpaqueAudioComponentInstance *_audioUnit;
    struct OpaqueAudioConverter *_audioConverter;
    struct AudioStreamBasicDescription _inputFormat;
    struct AudioStreamBasicDescription _streamFormat;
    struct AudioBuffer _inputBuffer;
    struct AudioStreamPacketDescription *_packetDescriptions;
    struct {
        void *buffer;
        int length;
        int tail;
        int head;
        int fillCount;
        _Bool atomic;
    } _buffer;
    unsigned int _inputPackets;
    void *_inputRawBuffer;
    unsigned int _inputRawBufferSize;
    _Bool _playing;
    _Bool _shouldLoop;
    _Bool _audioQueueRunning;
    _Bool _looping;
    _Bool _audioPipelineSetup;
    NSURL *_url;
    double _volume;
    unsigned long long _minimumNumberOfBytes;
    double _startTime;
    NSNumber *_maximumPlayTime;
    SPTDataLoader *_dataLoader;
    NSString *_sourceIdentifier;
    unsigned long long _dataCount;
    double _targetVolume;
    double _volumeVelocity;
    CADisplayLink *_displayLink;
    NSMapTable *_observers;
    NSObject<OS_dispatch_queue> *_mp3Queue;
    NSMutableData *_mp3Data;
    SPTID3Parser *_id3Parser;
    double _currentTime;
    double _loopTime;
    long long _framesDecoded;
    long long _junkSampleCount;
}

@property long long junkSampleCount; // @synthesize junkSampleCount=_junkSampleCount;
@property long long framesDecoded; // @synthesize framesDecoded=_framesDecoded;
@property(getter=isAudioPipelineSetup) _Bool audioPipelineSetup; // @synthesize audioPipelineSetup=_audioPipelineSetup;
@property(getter=isLooping) _Bool looping; // @synthesize looping=_looping;
@property double loopTime; // @synthesize loopTime=_loopTime;
@property(getter=isAudioQueueRunning) _Bool audioQueueRunning; // @synthesize audioQueueRunning=_audioQueueRunning;
@property double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) SPTID3Parser *id3Parser; // @synthesize id3Parser=_id3Parser;
@property(retain, nonatomic) NSMutableData *mp3Data; // @synthesize mp3Data=_mp3Data;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mp3Queue; // @synthesize mp3Queue=_mp3Queue;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double volumeVelocity; // @synthesize volumeVelocity=_volumeVelocity;
@property(nonatomic) double targetVolume; // @synthesize targetVolume=_targetVolume;
@property(nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(retain, nonatomic) NSNumber *maximumPlayTime; // @synthesize maximumPlayTime=_maximumPlayTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long minimumNumberOfBytes; // @synthesize minimumNumberOfBytes=_minimumNumberOfBytes;
@property double volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)id3Parser:(id)arg1 didEncounterError:(id)arg2;
- (void)id3ParserDidFinishLoading:(id)arg1;
- (void)setupAudioPipeline;
- (void)loop;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isDataEnoughToRender) _Bool dataEnoughToRender;
- (void)dataLoader:(id)arg1 didReceiveInitialResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveDataChunk:(id)arg2 forResponse:(id)arg3;
- (_Bool)dataLoaderShouldSupportChunks:(id)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dealloc;
- (void)notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)updateVolume;
- (void)destroyDisplayLink;
- (void)setupDisplayLink;
- (_Bool)internalSetVolume:(double)arg1;
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) double playTime;
- (void)play;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)setVolume:(double)arg1 fadeDuration:(double)arg2;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 sourceIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

