#include <assert.h>

typedef struct {
	    const struct AVCodecTag * const *codec_tag;
} AVInputFormat;
typedef struct AVCodecTag {
} AVCodecTag;
static const AVCodecTag ff_codec_aiff_tags[] = {
};
AVInputFormat ff_aiff_demuxer = {
	    .codec_tag = (const AVCodecTag* const []){ ff_codec_aiff_tags, 0 },
};

int main(void)
{
	assert(ff_aiff_demuxer.codec_tag[0] == ff_codec_aiff_tags);
	assert(ff_aiff_demuxer.codec_tag[1] == 0);
	return 0;
}
