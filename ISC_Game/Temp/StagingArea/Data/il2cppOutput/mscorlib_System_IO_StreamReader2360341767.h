#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Text.Decoder
struct Decoder_t3792697818;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IO.StreamReader
struct StreamReader_t2360341767;

#include "mscorlib_System_IO_TextReader1561828458.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t2360341767  : public TextReader_t1561828458
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t3397334013* ___input_buffer_4;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t1328083999* ___decoded_buffer_5;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_6;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_7;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_8;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_9;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t663144255 * ___encoding_10;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t3792697818 * ___decoder_11;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t3255436806 * ___base_stream_12;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_13;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t1221177846 * ___line_builder_14;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_16;

public:
	inline static int32_t get_offset_of_input_buffer_4() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___input_buffer_4)); }
	inline ByteU5BU5D_t3397334013* get_input_buffer_4() const { return ___input_buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_input_buffer_4() { return &___input_buffer_4; }
	inline void set_input_buffer_4(ByteU5BU5D_t3397334013* value)
	{
		___input_buffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___input_buffer_4, value);
	}

	inline static int32_t get_offset_of_decoded_buffer_5() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoded_buffer_5)); }
	inline CharU5BU5D_t1328083999* get_decoded_buffer_5() const { return ___decoded_buffer_5; }
	inline CharU5BU5D_t1328083999** get_address_of_decoded_buffer_5() { return &___decoded_buffer_5; }
	inline void set_decoded_buffer_5(CharU5BU5D_t1328083999* value)
	{
		___decoded_buffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___decoded_buffer_5, value);
	}

	inline static int32_t get_offset_of_decoded_count_6() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoded_count_6)); }
	inline int32_t get_decoded_count_6() const { return ___decoded_count_6; }
	inline int32_t* get_address_of_decoded_count_6() { return &___decoded_count_6; }
	inline void set_decoded_count_6(int32_t value)
	{
		___decoded_count_6 = value;
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___pos_7)); }
	inline int32_t get_pos_7() const { return ___pos_7; }
	inline int32_t* get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(int32_t value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_buffer_size_8() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___buffer_size_8)); }
	inline int32_t get_buffer_size_8() const { return ___buffer_size_8; }
	inline int32_t* get_address_of_buffer_size_8() { return &___buffer_size_8; }
	inline void set_buffer_size_8(int32_t value)
	{
		___buffer_size_8 = value;
	}

	inline static int32_t get_offset_of_do_checks_9() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___do_checks_9)); }
	inline int32_t get_do_checks_9() const { return ___do_checks_9; }
	inline int32_t* get_address_of_do_checks_9() { return &___do_checks_9; }
	inline void set_do_checks_9(int32_t value)
	{
		___do_checks_9 = value;
	}

	inline static int32_t get_offset_of_encoding_10() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___encoding_10)); }
	inline Encoding_t663144255 * get_encoding_10() const { return ___encoding_10; }
	inline Encoding_t663144255 ** get_address_of_encoding_10() { return &___encoding_10; }
	inline void set_encoding_10(Encoding_t663144255 * value)
	{
		___encoding_10 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_10, value);
	}

	inline static int32_t get_offset_of_decoder_11() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoder_11)); }
	inline Decoder_t3792697818 * get_decoder_11() const { return ___decoder_11; }
	inline Decoder_t3792697818 ** get_address_of_decoder_11() { return &___decoder_11; }
	inline void set_decoder_11(Decoder_t3792697818 * value)
	{
		___decoder_11 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_11, value);
	}

	inline static int32_t get_offset_of_base_stream_12() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___base_stream_12)); }
	inline Stream_t3255436806 * get_base_stream_12() const { return ___base_stream_12; }
	inline Stream_t3255436806 ** get_address_of_base_stream_12() { return &___base_stream_12; }
	inline void set_base_stream_12(Stream_t3255436806 * value)
	{
		___base_stream_12 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_12, value);
	}

	inline static int32_t get_offset_of_mayBlock_13() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___mayBlock_13)); }
	inline bool get_mayBlock_13() const { return ___mayBlock_13; }
	inline bool* get_address_of_mayBlock_13() { return &___mayBlock_13; }
	inline void set_mayBlock_13(bool value)
	{
		___mayBlock_13 = value;
	}

	inline static int32_t get_offset_of_line_builder_14() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___line_builder_14)); }
	inline StringBuilder_t1221177846 * get_line_builder_14() const { return ___line_builder_14; }
	inline StringBuilder_t1221177846 ** get_address_of_line_builder_14() { return &___line_builder_14; }
	inline void set_line_builder_14(StringBuilder_t1221177846 * value)
	{
		___line_builder_14 = value;
		Il2CppCodeGenWriteBarrier(&___line_builder_14, value);
	}

	inline static int32_t get_offset_of_foundCR_16() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___foundCR_16)); }
	inline bool get_foundCR_16() const { return ___foundCR_16; }
	inline bool* get_address_of_foundCR_16() { return &___foundCR_16; }
	inline void set_foundCR_16(bool value)
	{
		___foundCR_16 = value;
	}
};

struct StreamReader_t2360341767_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t2360341767 * ___Null_15;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767_StaticFields, ___Null_15)); }
	inline StreamReader_t2360341767 * get_Null_15() const { return ___Null_15; }
	inline StreamReader_t2360341767 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamReader_t2360341767 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier(&___Null_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
